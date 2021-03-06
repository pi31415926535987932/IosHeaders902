/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CryptoTokenKit/TKSmartCardUserInteractionForPINOperation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TKSmartCardSlot, TKSmartCardPINFormat, NSData;

@interface TKSmartCardUserInteractionForSecurePINChange : TKSmartCardUserInteractionForPINOperation <NSSecureCoding> {

	unsigned _PINConfirmation;
	TKSmartCardSlot* _slot;
	TKSmartCardPINFormat* _PINFormat;
	NSData* _APDU;
	int _currentPINByteOffset;
	int _newPINByteOffset;

}

@property (assign) unsigned PINConfirmation;                      //@synthesize PINConfirmation=_PINConfirmation - In the implementation block
@property (__weak) TKSmartCardSlot * slot;                        //@synthesize slot=_slot - In the implementation block
@property (retain) TKSmartCardPINFormat * PINFormat;              //@synthesize PINFormat=_PINFormat - In the implementation block
@property (retain) NSData * APDU;                                 //@synthesize APDU=_APDU - In the implementation block
@property (assign) int currentPINByteOffset;                      //@synthesize currentPINByteOffset=_currentPINByteOffset - In the implementation block
@property (assign) int newPINByteOffset;                          //@synthesize newPINByteOffset=_newPINByteOffset - In the implementation block
+(char)supportsSecureCoding;
-(TKSmartCardSlot *)slot;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setSlot:(id)arg1 PINFormat:(id)arg2 APDU:(id)arg3 currentPINByteOffset:(int)arg4 newPINByteOffset:(int)arg5 ;
-(void)runWithReply:(/*^block*/id)arg1 ;
-(void)setPINFormat:(TKSmartCardPINFormat *)arg1 ;
-(void)setAPDU:(NSData *)arg1 ;
-(TKSmartCardPINFormat *)PINFormat;
-(NSData *)APDU;
-(void)setCurrentPINByteOffset:(int)arg1 ;
-(void)setNewPINByteOffset:(int)arg1 ;
-(unsigned)PINConfirmation;
-(void)setPINConfirmation:(unsigned)arg1 ;
-(int)currentPINByteOffset;
-(int)newPINByteOffset;
-(void)setSlot:(TKSmartCardSlot *)arg1 ;
@end

