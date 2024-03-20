//Write a JavaScript function to find occurrences of a given pattern
//in a text string. The function should return the positions/index where the pattern is found.

function findPattern (){
    var text = "AABCD"
    var pattern = "AB";
    var lengthOfText = text.length
    var lengthOfPattern = pattern.length;

    for (let i = 0 ; i < lengthOfText - lengthOfPattern ; i++){
        var j;
        for(j = 0 ; j < lengthOfPattern ; j++){
            console.log(i ,j)
            if(text[i+j] != pattern[j]){
                break
            }
        }
        if(j == lengthOfPattern){
            console.log("found")
        }
    }
}
findPattern()


