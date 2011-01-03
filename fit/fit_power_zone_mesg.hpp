////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2008 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 1.0Release
// Tag = $Name: AKW1_000 $
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_POWER_ZONE_MESG_HPP)
#define FIT_POWER_ZONE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class PowerZoneMesg : public Mesg
{
   public:
      PowerZoneMesg(void) : Mesg(Profile::MESG_POWER_ZONE)
      {
      }

      PowerZoneMesg(const Mesg &mesg) : Mesg(mesg)
      {
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns message_index field
      ///////////////////////////////////////////////////////////////////////
      FIT_MESSAGE_INDEX GetMessageIndex(void)
      {
         return GetFieldUINT16Value(254);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set message_index field
      ///////////////////////////////////////////////////////////////////////
      void SetMessageIndex(FIT_MESSAGE_INDEX messageIndex)
      {
         SetFieldUINT16Value(254, messageIndex);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns high_value field
      // Units: watts
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT16 GetHighValue(void)
      {
         return GetFieldUINT16Value(1);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set high_value field
      // Units: watts
      ///////////////////////////////////////////////////////////////////////
      void SetHighValue(FIT_UINT16 highValue)
      {
         SetFieldUINT16Value(1, highValue);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns name field
      ///////////////////////////////////////////////////////////////////////
      string GetName(void)
      {
         return GetFieldSTRINGValue(2);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set name field
      ///////////////////////////////////////////////////////////////////////
      void SetName(string name)
      {
         SetFieldSTRINGValue(2, name);
      }

};

} // namespace fit

#endif // !defined(FIT_POWER_ZONE_MESG_HPP)