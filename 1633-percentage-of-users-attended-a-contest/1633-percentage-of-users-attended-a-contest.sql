select s2.contest_id, round((count(s2.contest_id)/(select count(*) from Users))*100,2) as percentage from Users s1 left join Register s2
on s1.user_id = s2.user_id
group by s2.contest_id having s2.contest_id is not null
order by percentage desc, s2.contest_id asc