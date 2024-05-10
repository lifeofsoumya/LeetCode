/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    return {
        toBe: (tobeVal) => {
            if(val !== tobeVal) throw new Error("Not Equal");
            else return true
        },
        notToBe: function(ntbVal) {
            if (val !== ntbVal) return true;
            else throw new Error("Equal");
        }
    }
};


/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */