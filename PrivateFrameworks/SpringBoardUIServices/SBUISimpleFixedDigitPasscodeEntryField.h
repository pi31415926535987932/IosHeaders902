/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class UIView, NSMutableArray;

@interface SBUISimpleFixedDigitPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {

	UIView* _leftPaddingView;
	UIView* _rightPaddingView;
	UIView* _characterIndicatorsContainerView;
	NSMutableArray* _characterIndicators;
	float _backgroundAlpha;
	UIView* _springView;
	UIView* _springViewParent;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)reset;
-(void)setBackgroundAlpha:(float)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(void)_appendString:(id)arg1 ;
-(void)_autofillForMesaWithCompletion:(/*^block*/id)arg1 ;
-(void)_setLuminosityBoost:(float)arg1 ;
-(void)_resetForFailedPasscode:(char)arg1 playUnlockFailedSound:(char)arg2 ;
-(id)initWithDefaultSizeAndLightStyle:(char)arg1 numberOfDigits:(unsigned)arg2 ;
-(id)initWithDefaultSizeAndLightStyle:(char)arg1 ;
-(CGRect)_entryFieldBoundsWithXOffset:(float)arg1 ;
-(UIEdgeInsets)_entryFieldPaddingOutsideRing;
-(void)_deleteLastCharacter;
-(char)_hasAnyCharacters;
-(CGSize)_viewSize;
@end

