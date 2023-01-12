import pygame
from pygame.sprite import Sprite


class Alien(Sprite):
    def __init__(self, ai_game):
        super().__init__()
        self.screen = ai_game.screen
        self.image = pygame.image.load("alien.bmp")
        self.rect = self.image.get_rect()
        self.rect.x = self.rect.width
        self.rect.y = self.rect.height
        self.x = float(self.rect.x)
        self.settings = ai_game.settings

    def check_edges(self):
        """如果外星人位于屏幕边缘， 就返回TRUE"""
        screen_rect = self.screen.get_rect()
        if self.rect.right >= screen_rect.right or self.rect.left <= 0:
            return True

    def update(self):
        """向右移动外星人"""
        """或者向左移动
        由fleet direction决定"""

        self.x += (self.settings.alien_speed * self.settings.fleet_direction)

        self.rect.x = self.x




