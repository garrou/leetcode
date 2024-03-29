class Solution {
    fun thirdMax(nums: IntArray): Int {
        
        val set = sortedSetOf<Int>()

        nums.forEach {
            set.add(it)
            if (set.size > 3) set.remove(set.first())
        }
        return if (set.size > 2) set.first() else set.last()
    }
}
