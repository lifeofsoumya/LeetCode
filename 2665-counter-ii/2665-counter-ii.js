/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    const initVal = init;
    let temp = initVal;
    return {
        increment: () => {
            return ++temp;
        },
        decrement: () => {
            return --temp;
        },
        reset: () => {
            temp = initVal
            return initVal;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */