/***********************************************

Gameka: A game development tool for non-programmers
Copyright (C) 2011 Igor Augusto de Faria Costa

This software is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This software is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

************************************************/


#ifndef TELEPORTAREA_H
#define TELEPORTAREA_H

/**
 * @brief Entidade para guardar dados acerca de uma área de teletransporte.
 *
 */
class TeleportArea
{
public:
    /**
     * @brief Construtor.
     *
     */
    TeleportArea();

    int id; /**< Número identificador  */
    int x; /**< Posição X */
    int y; /**< Posição Y */
    int w; /**< Largura da área. */
    int h; /**< Altura da área. */

    int mapId; /**< Número identificador do mapa para o qual o teletransporte mandará. */
    int mapPosX;  /**< Posição X do mapa para a qual o teletransporte mandará. */
    int mapPosY; /**< Posição Y do mapa para a qual o teletransporte mandará. */
    bool mapPositionDetermined; /**< Se foi determinada alguma posição do mapa. */
    bool showVictoryAnimation; /**< Se mostra animação de vitória. (ainda não funciona) */
};

#endif // TELEPORTAREA_H
