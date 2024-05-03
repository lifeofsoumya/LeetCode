WITH findorders AS (
    SELECT product_id, SUM(unit) as unit
    FROM Orders
    WHERE order_date LIKE '2020-02%'
    GROUP BY product_id 
    HAVING SUM(unit) >= 100
)

SELECT p.product_name, fo.unit
FROM Products p
JOIN findorders fo ON fo.product_id = p.product_id;
