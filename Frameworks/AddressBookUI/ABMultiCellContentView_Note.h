/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:19:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABMultiCellContentView.h>
#import <libobjc.A.dylib/ABSwellTextViewDelegate.h>

@class ABSwellTextView, NSString;

@interface ABMultiCellContentView_Note : ABMultiCellContentView <ABSwellTextViewDelegate> {

	ABSwellTextView* _textView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(char)arg6 ;
+(void)setupTextView:(id)arg1 withStyleProvider:(id)arg2 whenEditing:(char)arg3 ;
+(id)swellTextViewForReuse;
+(id)labelTextForPropertyGroup:(id)arg1 info:(id)arg2 styleProvider:(id)arg3 ;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)arg1 ;
-(void)updateSubviewsForNewStateAnimated:(char)arg1 ;
-(id)viewForFirstResponder;
-(char)canBeginEditingAnytime;
-(char)tabToNextResponder:(char)arg1 fromView:(id)arg2 ;
-(CGRect)focusRectForView:(id)arg1 ;
-(char)shouldUseTwoLineLabels;
-(char)swellTextViewShouldBeginEditing:(id)arg1 ;
-(char)swellTextViewShouldEndEditing:(id)arg1 ;
-(void)swellTextViewDidBeginEditing:(id)arg1 ;
-(void)swellTextViewDidEndEditing:(id)arg1 ;
-(void)swellTextViewTextDidChange:(id)arg1 ;
-(void)swellTextView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(CGRect)frameForLabel;
-(void)dealloc;
-(void)reload;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setLabelText:(id)arg1 ;
@end

