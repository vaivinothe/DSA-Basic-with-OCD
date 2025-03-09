# DSA-Basic-with-OCD
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
