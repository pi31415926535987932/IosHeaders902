/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:03 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyEditingCell.h>

@class CNPostalAddressEditorView, UIColor;

@interface CNPropertyPostalAddressEditingCell : CNPropertyEditingCell {

	CNPostalAddressEditorView* _addressEditor;

}

@property (nonatomic,copy) UIColor * editorSeparatorColor; 
@property (nonatomic,retain) CNPostalAddressEditorView * addressEditor;              //@synthesize addressEditor=_addressEditor - In the implementation block
-(void)setPresentingDelegate:(id)arg1 ;
-(id)constantConstraints;
-(float)rightContentMargin;
-(id)firstResponderItem;
-(void)setEditorSeparatorColor:(UIColor *)arg1 ;
-(void)updateWithPropertyItem:(id)arg1 ;
-(float)leftValueMargin;
-(CNPostalAddressEditorView *)addressEditor;
-(void)layoutChanged:(id)arg1 ;
-(UIColor *)editorSeparatorColor;
-(void)setAddressEditor:(CNPostalAddressEditorView *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutMarginsDidChange;
-(void)valueChanged:(id)arg1 ;
-(id)valueView;
@end

