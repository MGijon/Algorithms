# Linear Search R implementation. O(n).
LinearSearch <- function (elements, x){
	# elements : vector with the elements
	# x        : element to be found
	if (length(elements)!= 0){
		for (i in 1:length(elements)){
			if (elements[i] == x){
				return(i)
			}
		}
	}
	return(-1)
}

elements <- c(1, 3, 4, 5, 6, 8, 23, 43, 44, 45)
x <- 23

position <- LinearSearch(elements, x)

if (position[1] == -1){
	print("The element has not been found")
} else {
	sprintf("The element has been fount at position %d", position + 1)
}

