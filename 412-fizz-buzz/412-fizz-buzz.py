class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        dict1 = {0:"FizzBuzz", 1:"Fizz", 2:"Buzz"}
        res = []
        for j in range(1,n+1):
            if j%3 == 0 and j%5 == 0: res.append(dict1[0])
            elif j%3 == 0 : res.append(dict1[1])
            elif j%5==0: res.append(dict1[2])
            else : res.append(str(j))
        
        return res