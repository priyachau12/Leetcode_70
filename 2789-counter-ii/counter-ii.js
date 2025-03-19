/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    var r=init;
    return{
 increment:function(){
return ++r;
 },
 decrement:function(){
return --r;
 },
 reset:function(){
r=init;
    return r;
 }
    }
   
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */