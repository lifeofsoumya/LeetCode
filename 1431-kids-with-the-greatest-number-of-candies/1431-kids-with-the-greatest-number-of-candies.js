/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
const kidsWithCandies = (c,e)=>Array(c.length).fill(undefined).map((x,i)=>c[i]+e>=Math.max(...c))