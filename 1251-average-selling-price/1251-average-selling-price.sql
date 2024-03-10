SELECT
    p.product_id,
    IFNULL(ROUND(SUM(price * units) / SUM(units), 2), 0) AS average_price
FROM Prices p
LEFT JOIN UnitsSold us ON p.product_id = us.product_id #left join to keep all the prices even if not sold, just show avg price 0 for that case
   AND us.purchase_date BETWEEN p.start_date AND p.end_date
GROUP BY p.product_id;