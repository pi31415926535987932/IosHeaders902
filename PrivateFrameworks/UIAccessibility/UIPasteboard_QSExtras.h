/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIAccessibility/__UIPasteboard_QSExtras_super.h>

@interface UIPasteboard_QSExtras : __UIPasteboard_QSExtras_super
+(Class)safeCategoryBaseClass;
+(id)generalPasteboard;
+(id)pasteboardWithName:(id)arg1 create:(char)arg2 ;
+(id)pasteboardWithUniqueName;
+(id)safeCategoryTargetClassName;
+(char)_accessibilityUseQuickSpeakPasteBoard;
+(id)_accessibilityQuickSpeakPasteboard;
+(void)_accessibilitySetUseQuickSpeakPasteBoard:(char)arg1 ;
-(int)changeCount;
-(id)string;
-(id)images;
-(id)image;
-(id)items;
-(void)setItems:(id)arg1 ;
-(id)URL;
-(id)color;
-(int)numberOfItems;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(char)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2 ;
-(void)setData:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(id)pasteboardTypes;
-(char)containsPasteboardTypes:(id)arg1 ;
-(id)dataForPasteboardType:(id)arg1 ;
-(void)setValue:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)itemSetWithPasteboardTypes:(id)arg1 ;
-(void)addItems:(id)arg1 ;
-(id)strings;
-(id)URLs;
-(id)colors;
-(char)_accessibilityShouldSwapReceiverWithQuickSpeakPasteboard;
@end

