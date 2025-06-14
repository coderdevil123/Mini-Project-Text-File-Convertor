con_in <- file("input.txt", "r")
con_out <- file("output.txt", "w")

while (length(line <- readLines(con_in, n = 1, warn = FALSE)) > 0) {
  writeLines(toupper(line), con_out)
}

close(con_in)
close(con_out)
