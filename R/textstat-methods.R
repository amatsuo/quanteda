# base methods --------------

#' @method "[" textstat
#' @export
#' @noRd
"[.textstat" <- function(x, i, j, ...) {
    if (missing(i)) i <- seq_len(nrow(x))
    if (missing(j)) j <- seq_len(ncol(x))
    l <- class(x)
    x <- as.data.frame(x)[i, j, drop = FALSE]
    class(x) <- l
    return(x)
}

# textstat_select ------------

#' Select rows of textstat objects by glob, regex or fixed patterns
#'
#' Users can subset output object of \code{textstat_collocations},
#' \code{textstat_keyness} or \code{textstat_frequency} based on
#' \code{"glob"}, \code{"regex"} or \code{"fixed"} patterns using this method.
#' @param x a \code{textstat} object
#' @inheritParams pattern
#' @param selection whether to \code{"keep"} or \code{"remove"} the rows that
#'   match the pattern
#' @inheritParams valuetype
#' @param case_insensitive ignore case when matching, if \code{TRUE}
#' @keywords textstat internal
#' @export
#' @examples
#' period <- ifelse(docvars(data_corpus_inaugural, "Year") < 1945, "pre-war", "post-war")
#' mydfm <- dfm(data_corpus_inaugural, groups = period)
#' keyness <- textstat_keyness(mydfm)
#' textstat_select(keyness, 'america*')
#' 
textstat_select <- function(x, 
                            pattern = NULL, 
                            selection = c("keep", "remove"), 
                            valuetype = c("glob", "regex", "fixed"),
                            case_insensitive = TRUE) {
    UseMethod("textstat_select")
}

#' @export
textstat_select.default <- function(x, pattern = NULL, 
                                  selection = c("keep", "remove"), 
                                  valuetype = c("glob", "regex", "fixed"),
                                  case_insensitive = TRUE) {
    stop(friendly_class_undefined_message(class(x), "textstat_select"))
}

#' @export
textstat_select.textstat <- function(x, pattern = NULL,
                                     selection = c("keep", "remove"), 
                                     valuetype = c("glob", "regex", "fixed"), 
                                     case_insensitive = TRUE) {
    
    if (is.null(pattern)) return(x)
    selection <- match.arg(selection)
    valuetype <- match.arg(valuetype)
    attrs <- attributes(x)
    
    id <- unlist(regex2id(pattern, x[[1]], valuetype, case_insensitive))
    if (selection == 'keep') {
        x <- x[id,]
    } else {
        x <- x[id * -1,]
    }
    class(x) <- attrs$class
    return(x)
}
