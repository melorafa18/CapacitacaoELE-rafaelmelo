def verifica():
    '''Compara o preço de compra com os de pratileira e verifica se estão
    corretor'''
    preco_prd={"arduino":74,"servoMotor":5,"potenciomentro":1.9,"LEDverm":1,"LEDverd":1,"resistor1":0.1,"resistor100k":0.5}
    #print(preco_prd.get("arduino"))
    comprados=["resistor100k","resistor100k","servoMotor","arduino","arduino","potenciomentro","resistor1","LEDverm","LEDverm","LEDverm","LEDverd","LEDverd"]
    precoPago = [0.7,1,5,100,74,2.5,0.1,1,1,2,2,1]
    erro=0
    for i in comprados:
        pos=list.index(comprados,i)
        if precoPago[pos]!=preco_prd.get(i):
            erro+=1
    return "A quantidade de erros foi de: "+str(erro)
verifica()
