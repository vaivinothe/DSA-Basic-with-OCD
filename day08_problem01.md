# DSA-Basic-with-OCD
 Q 1.
 https://leetcode.com/problems/alternating-groups-ii/description/?envType=daily-question&envId=2025-03-09

  def numberOfAlternatingGroups(self, colors, k):
        group = 0
        count = 1
        colors += colors[:k-1]
        i = 0   
        while i < (len(colors)-1) :   
            if (colors[i] == 0 and colors[i+1] == 1) or (colors[i] == 1 and colors[i+1] == 0):
                count+=1
            else:
                count = 1
            if count  == k :
                group +=1
                count = 1
                i = i-k+2
            i = i+1
        return group




Q 2.
https://www.geeksforgeeks.org/problems/count-palindrome-sub-strings-of-a-string0652/1 
        # Check for odd-length palindromes
        for i in range(n):
            for j in range(1, min(i + 1, n - i)):
                if s[i - j] == s[i + j]:
                    count += 1
                else:
                    break
        # Check for even-length palindromes
        for i in range(n - 1):
            for j in range(1, min(i + 2, n - i)):
                if s[i - j + 1] == s[i + j]:
                    count += 1
                else:
                    break
        return count
