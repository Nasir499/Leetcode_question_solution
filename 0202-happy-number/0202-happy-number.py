class Solution:
    def isHappy(self, n: int) -> bool:
        seen = set()
        curr = str(n)

        while curr not in seen:
            seen.add(curr)
            sum=0
            for digit in curr:
                digit=int(digit)
                sum += digit**2

            if sum==1:return True
            curr=str(sum)
        return False
        