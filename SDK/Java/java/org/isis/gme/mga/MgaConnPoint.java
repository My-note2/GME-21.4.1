/*
 * Copyright (c) 2002, Vanderbilt University
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 * 
 * IN NO EVENT SHALL THE VANDERBILT UNIVERSITY BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE VANDERBILT
 * UNIVERSITY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE VANDERBILT UNIVERSITY SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE VANDERBILT UNIVERSITY HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Author: Gyorgy Balogh
 * Date last modified: 10/23/03
 */

package org.isis.gme.mga;

import org.isis.jaut.Dispatch;

/**
 * @author bogyom
 *
 * To change this generated comment edit the template variable "typecomment":
 * Window>Preferences>Java>Templates.
 * To enable and disable the creation of type comments go to
 * Window>Preferences>Java>Code Generation.
 */
public class MgaConnPoint extends Dispatch 
{
	public MgaConnPoint()
	{
	}

	public MgaConnPoint( Dispatch d )
	{
		attach( d );
		changeInterface( "{cb8fa000-c1fd-11d3-9ad2-00aa00b6fe26}" );
	}
	
/*	public MgaConnection getOwner()
	{
		return new MgaConnection(Dispatch.get(this, "Owner").toDispatch());
	}

	public String getConnRole()
	{
		return Dispatch.get(this, "ConnRole").toString();
	}

	public void setConnRole(String lastParam)
	{
		Dispatch.CallSub(this, "ConnRole", lastParam);
	}

	public MgaFCO getTarget()
	{
		return new MgaFCO(Dispatch.get(this, "target").toDispatch());
	}

	public MgaFCOs getReferences()
	{
		return new MgaFCOs(Dispatch.get(this, "References").toDispatch());
	}

	public void remove()
	{
		Dispatch.CallSub(this, "Remove");
	}*/

}
