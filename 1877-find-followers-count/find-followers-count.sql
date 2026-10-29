# Write your MySQL query statement below
SELECT user_id, count(follower_id) as followers_count
FROM FOLLOWERS
GROUP BY user_id
ORDER BY user_id;