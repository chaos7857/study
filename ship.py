import pygame


class Ship:
    """管理飞船"""
    def __init__(self, ai_game):
        """"""
        self.screen = ai_game.screen
        self.settings = ai_game.settings
        self.screen_rect = ai_game.screen.get_rect()
        # 加载飞船图像并获取外接矩形

        self.image = pygame.image.load("airplane.bmp")
        self.rect = self.image.get_rect()
        # 对于每艘飞船将其放在屏幕底部中央位置
        self.rect.midbottom = self.screen_rect.midbottom

        self.x = float(self.rect.x)

        self.moving_right = False
        self.moving_left = False

    def update(self):
        """根据移动标志调整飞船位置"""
        if self.moving_right and self.rect.right < self.screen_rect.right:
            self.x += self.settings.ship_speed
            # print("d")

        if self.moving_left and self.rect.left > 0:
            self.x -= self.settings.ship_speed
            # print("a")
        self.rect.x = self.x

    def blitme(self):
        """在指定位置绘制飞船"""
        self.screen.blit(self.image, self.rect)
