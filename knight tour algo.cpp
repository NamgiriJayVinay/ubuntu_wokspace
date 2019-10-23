isValid(x,y,solution)
{
  if 0<=x<= Board size and 0<=y<= Board size and (x,y) is empty
      return true
}
knightTour(x,y,move,sol,xMove,yMove)
{
  if move=Board size * Board size
      return true
  for k=0 to number of possible Xmovement or Ymovement
      xNext=x+xMove[k]
      yNext=y+ymove[k]
      if isValid(xNext,yNext,move+1,sol,xMove,yMove)
          return true
      else
          remove from sol[xNext,yNext] to backtrack
  return false
}
