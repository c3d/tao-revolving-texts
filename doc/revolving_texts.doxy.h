// *****************************************************************************
// revolving_texts.doxy.h                                          Tao3D project
// *****************************************************************************
//
// File description:
//
//
//
//
//
//
//
//
// *****************************************************************************
// This software is licensed under the GNU General Public License v3
// (C) 2012-2013, Baptiste Soulisse <baptiste.soulisse@taodyne.com>
// (C) 2012-2013, Catherine Burvelle <catherine@taodyne.com>
// (C) 2012-2014,2019, Christophe de Dinechin <christophe@dinechin.org>
// (C) 2012-2013, Jérôme Forissier <jerome@taodyne.com>
// (C) 2012-2013, Baptiste Soulisse <baptiste.soulisse@taodyne.com>
// *****************************************************************************
// This file is part of Tao3D
//
// Tao3D is free software: you can r redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Tao3D is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Tao3D, in a file named COPYING.
// If not, see <https://www.gnu.org/licenses/>.
// *****************************************************************************
﻿/**
 * @~english
 * @taomoduledescription{RevolvingTexts, Revolving Texts}
 * <tt>import RevolvingTexts</tt> - Revolving texts.@n
 *
 * This module allows to add texts rotating around a virtual cylinder in your presentations.
 *
 * For instance, the following code create a set of revolving texts with 10 slots.
 *
 * @include revolving_texts.ddd
 *
 * Here is a screen capture of this document:
 * @image html "revolving_texts.png" "Revolving texts"
 *
 * @endtaomoduledescription{RevolvingTexts}
 *
 * @~french
 * @taomoduledescription{RevolvingTexts, Barillet de textes}
 * <tt>import RevolvingTexts</tt> - Barillet de textes.@n
 *
 * Ce module permet d'ajouter des textes tournants autour d'un cylindre invisible dans vos présentations.
 *
 * Par exemple, le code suivant permet de créer un barillet comprenant 10 textes tournant.
 *
 * @include revolving_texts.ddd
 *
 * Ci-dessous, une capture d'écran issue du document précédent:
 * @image html "revolving_texts.png" "Output from revolving_texts.ddd"
 *
 * @endtaomoduledescription{RevolvingTexts}
 * @~
 * @{
 */

/**
 * @~english
 * Add a revolving text.
 *
 * Set a revolving text define by @p t to the slot @p n.
@code
// Set a text to the slot 1
revolving_text 1, "flowers.png"
@endcode
 *
 * @~french
 * Ajoute un texte tournant.
 *
 * Intégre un texte tournant définit par @p t à la position @p n.
@code
// Ajoute un élément à la position 1 du barillet
revolving_text 1, "flowers.png"
@endcode
 */
revolving_text(n:integer, t:text);

/**
 * @~english
 * Change format and size of revolving text.
 *
 * Set format @p format and size @p size to the revolving text.
 * Default values are "Arial" for the format and 16 for the size.
@code
revolving_format "Arial", 16
@endcode
 *
 * @~french
 * Change le format et la taille du texte tournant.
 *
 * Modifie le format et la taille du texte tournant
 * par respectivement @p format et @p size.
 * Les valeurs de défaults sont "Arial"
 * pour le format et 16 pour la taille du texte.
@code
revolving_format "Arial", 16
@endcode
 */
revolving_format(format:text, size:integer);

/**
 * @~english
 * Change main color of revolving text.
 *
 * Set the color of the text situated in the background.
 *
 * @param h hue component of the color, in degrees (in the range 0.0 to 360.0).
 * @param s saturation component of the color, in the range 0.0 to 1.0.
 * @param v value component of the color, in the range 0.0 to 1.0.
 *
 * @note For further informations, see @p color_hsv
 *
 * @~french
 * Change la couleur du texte au second plan.
 *
 * Modifie la couleur du texte situé au second plan.
 *
 * @param h Teinte, en degrés (entre 0.0 et 360.0).
 * @param s Saturation, entre 0.0 to 1.0.
 * @param v Valeur, entre 0.0 to 1.0.
 *
 * @note Pour plus d'informations, voir @p color_hsv
 */
revolving_color(h:real, s:real, v:real);

/**
 * @~english
 * Change highlighting color of the text.
 *
 * Set highlighting color of the text situated in the foreground.
 *
 * @param h hue component of the color, in degrees (in the range 0.0 to 360.0).
 * @param s saturation component of the color, in the range 0.0 to 1.0.
 * @param v value component of the color, in the range 0.0 to 1.0.
 *
 * @note For further informations, see @p color_hsv
 *
 * @~french
 * Change la couleur de mise en valeur du texte au premier plan.
 *
 * Modifie la couleur du texte apparaissant au premier plan.
 *
 * @param h Teinte, en degrés (entre 0.0 et 360.0).
 * @param s Saturation, entre 0.0 to 1.0.
 * @param v Valeur, entre 0.0 to 1.0.
 *
 * @note Pour plus d'informations, voir @p color_hsv
 */
highlighting_color(h:real, s:real, v:real);


/**
 * @}
 */
