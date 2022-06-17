# Write your MySQL query statement below
select firstname, lastname, city, state
FROM Person left join Address on person.personId = Address.personId;