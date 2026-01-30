def romanizer(numbers):
    val_to_roman = [
        (1000, 'M'),
        (900, 'CM'),
        (500, 'D'),
        (400, 'CD'),
        (100, 'C'),
        (90, 'XC'),
        (50, 'L'),
        (40, 'XL'),
        (10, 'X'),
        (9, 'IX'),
        (5, 'V'),
        (4, 'IV'),
        (1, 'I')
    ]
    
    results = []
    for num in numbers:
        result = ''
        remaining = num
        for value, symbol in val_to_roman:
            count = remaining // value
            if count:
                result += symbol * count
                remaining -= value * count
        results.append(result)
    
    return results

if __name__ == '__main__':
    n = int(input())
    numbers = []
    for _ in range(n):
        numbers.append(int(input()))
    
    result = romanizer(numbers)
    for roman in result:
        print(roman)
