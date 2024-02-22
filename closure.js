function createFunction()
{
	function multiplyBy2 (num)
	{
 		return num*2;
	}
 	return multiplyBy2;
}

const result = createFunction();
const result2 = result(3);

console.log(result2); // 6
