
document.querySelector('.btn')?.addEventListener('click',()=>{
    let a: number = 100
    console.log(a)
    
    let position: [number, number] = [114, 37]
    console.log('position :>> ', position)

    const alink = document.querySelector('.lin') as HTMLAnchorElement
    console.log('alink :>> ', alink);
})