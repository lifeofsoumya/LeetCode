/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    let temp = Object.keys(obj);
    console.log(temp)
    if(temp.length == 0) return true;
    return false;
};