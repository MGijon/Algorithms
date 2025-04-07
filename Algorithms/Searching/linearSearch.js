/* Linear Search implementation in JavaScript
 * O(n)
 */

function LinearSearch(elements, x){
	// Linear Search performed on elements to found x
	for (var i=0; i < elements.length; i++){
		if (elements[i] === x){
			return i;
		}
	}
	return -1
}

let elements = [3, 1, 2, 4, 6, 7, 8, 49, 33, 192]
let x = 4; // element to be found


console.log("The elemtents are ", elements)
console.log("The element to be found is: ", x)

let position = LinearSearch(elements, x)
if (position === -1){
	console.log("The elements has not been found")
} else{
	console.log("The element has been found at position ", position + 1)
}
