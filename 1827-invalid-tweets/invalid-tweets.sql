# Write your MySQL query statement below
select tweet_id 
from Tweets as t
where length(content)>15 ;