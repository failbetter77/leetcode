class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        idx=0
        strs=[]
        
        letters = {"2": "abc", "3": "def", "4": "ghi", "5": "jkl", 
                   "6": "mno", "7": "pqrs", "8": "tuv", "9": "wxyz"}
        
        if len(digits) == 0:
            return []
        
        def recur(idx, path):
            if idx==len(digits):
                return strs.append("".join(path))
            
            for c in letters[digits[idx]]:
                path.append(c)
                recur(idx+1, path)
                path.pop()
                
                
        
        recur(0,[])
        
        return strs
                