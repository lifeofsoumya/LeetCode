SELECT CASE WHEN id = (SELECT MAX(id) FROM Seat) AND id % 2 = 1 THEN id WHEN id % 2 = 1 THEN id + 1 ELSE id - 1 END AS id, student
FROM Seat
ORDER BY id

