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


