/* The isBadVersion API is defined in the parent class VersionControl.
      fun isBadVersion(version: Int) : Boolean {} */

class Solution: VersionControl() {
    override fun firstBadVersion(n: Int) : Int {
        var result = 0
        var start = 1
        var end = n

        while (start <= end) {
            var mid = start + (end - start) / 2
            
            if (isBadVersion(mid)) {
                end = mid - 1
                result = mid
            } else {
                start = mid + 1
            }
        }
        return result
	}
}
