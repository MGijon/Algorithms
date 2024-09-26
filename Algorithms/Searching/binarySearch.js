/*
 * Binary Search implementathon in JavaScript. Theta(log n).
 */

function binarySearch(elements, start, end, x){
	if (start > end){
		return -1
	}		

	let middle = Math.floor((start + end) / 2)
	console.log(middle)
	if (elements[middle] === x){
		return middle
	}
	if (x < elements[middle]){
		return binarySearch(elements, start, middle - 1, x)
	} else {
		return binarySearch(elements, middle + 1, end, x)
	}

	return -1
}

elements = [1, 3, 4, 5, 12, 16, 43, 39, 99]
x = 12

left = 0
right = elements.length

position = binarySearch(elements, left, right, x)

console.log("The elemens are: ", elements)
console.log("The element to find is ", x)

if (position === -1){
	console.log("The element has not been found")
} else { 
	console.log("The element has been found at position ", position + 1)
}

