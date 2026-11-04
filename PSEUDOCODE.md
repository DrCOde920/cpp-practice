## 1. Employee salary

**Assumption:** “over of 2%” means overtime pay equal to 2% of basic salary. The question does not state any deductions, so ask for deductions; enter 0 if there are none.

```text
Begin
    numeric nBasicSalary, nDeductions

    accept nBasicSalary, nDeductions

    nOvertimePay = nBasicSalary × (2 / 100)
    nGrossSalary = nBasicSalary + nOvertimePay
    nNetSalary = GrossSalary - nDeductions

    display nOvertimePay
    display nGrossSalary
    display nNetSalary
End
```

## 2. Area of a circle

```text
Begin
    numeric nRadius, nArea
    accept nRadius

    nArea = 3.141592653589793 × (radius × radius)

    display nArea
End
```

## 3. Area and perimeter of a triangle

Enter a base and its perpendicular height for the area, and all three side lengths for the perimeter.

```text
Begin
    numeric nArea, nPerimeter, nBase, nHeight, nSide1, nSide2, nSide3
    accept nBase, nHeight, nSide1, nSide2, nSide3
    nArea = (nBase × nHeight) / 2
    nPerimeter = nSide1 + nSide2 + nSide3

    display nArea
    display nPerimeter
End
```

## 4. TV discount

Black-and-white TVs receive 5%. Colored TVs receive 8% for a 14-inch screen or 10% for a 21-inch screen.

```text
Begin
    char cTvType
    numeric nSellingPrice

    accept cTvType
    accept nSellingPrice

    If (cTvType == 'B')
        Begin
            nDiscountPercent = 5
        End
    Else If (cTvType == 'C')
        Begin
            numeric nScreenSize
            accept nScreenSize

            If (nScreenSize == 14)
                Begin
                    nDiscountPercent = 8
                End
            Else If (screenSize == 21)
                Begin
                    nDiscountPercent = 10
                End
            Else
                Begin
                    display "Unsupported screen size"
                End
            End If
        End
    End If

    Else
        Begin
            display "Unsupported TV type"
        End

    nDiscountAmount = nSellingPrice × nDiscountPercent / 100
    nFinalPrice = nSellingPrice - nDiscountAmount

    display nDiscountPercent
    display nDiscountAmount
    display nFinalPrice
End
```
