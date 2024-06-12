/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    let res = []
    while(arr.length > 0){
        let temp = arr.splice(0, size);
        res.push(temp);
    }
    return res;
};
