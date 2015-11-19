/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>
#import <libobjc.A.dylib/RUITableFooterDelegate.h>
#import <libobjc.A.dylib/PSPasscodeFieldDelegate.h>

@protocol RemoteUITableHeader, RemoteUITableFooter;
@class UIView, RUIElement, UITextField, NSString, UILabel, RUIObjectModel, RUIPage, PSPasscodeField, UIColor;

@interface RUIPasscodeView : RUIElement <RUITableFooterDelegate, PSPasscodeFieldDelegate> {

	UIView* _containerView;
	RUIElement* _header;
	UIView*<RemoteUITableHeader> _headerView;
	UITextField* _complexPasscodeField;
	RUIElement* _footer;
	UIView*<RemoteUITableFooter> _footerView;
	NSString* _pendingAutoFillToken;
	char _appeared;
	UILabel* _titleLabel;
	unsigned _passcodeValidationAttempts;
	RUIObjectModel* _objectModel;
	RUIPage* _page;
	NSString* _headerTitle;
	PSPasscodeField* _passcodeField;
	UIColor* _foregroundColor;
	int _keyboardAppearance;
	unsigned _numberOfEntryFields;

}

@property (assign,nonatomic,__weak) RUIObjectModel * objectModel;              //@synthesize objectModel=_objectModel - In the implementation block
@property (assign,nonatomic,__weak) RUIPage * page;                            //@synthesize page=_page - In the implementation block
@property (nonatomic,copy) NSString * headerTitle;                             //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,readonly) PSPasscodeField * passcodeField;                //@synthesize passcodeField=_passcodeField - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                        //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) int keyboardAppearance;                           //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (assign,nonatomic) unsigned numberOfEntryFields;                     //@synthesize numberOfEntryFields=_numberOfEntryFields - In the implementation block
@property (nonatomic,retain) RUIElement * header;                              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) RUIElement * footer;                              //@synthesize footer=_footer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)passcodeView;
-(void)_doneButtonTapped:(id)arg1 ;
-(id)init;
-(id)titleLabel;
-(int)keyboardAppearance;
-(void)setKeyboardAppearance:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)headerView;
-(unsigned)numberOfEntryFields;
-(void)setNumberOfEntryFields:(unsigned)arg1 ;
-(UIColor *)foregroundColor;
-(RUIPage *)page;
-(void)setPage:(RUIPage *)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(id)footerView;
-(PSPasscodeField *)passcodeField;
-(id)sourceURL;
-(void)setHeader:(RUIElement *)arg1 ;
-(RUIElement *)header;
-(RUIElement *)footer;
-(void)setFooter:(RUIElement *)arg1 ;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(RUIObjectModel *)objectModel;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(void)viewDidLayout;
-(void)autofillWithToken:(id)arg1 ;
-(char)_requiresLocalPasscodeValidation;
-(void)_updateFieldSpacer;
-(void)_complexPasscodeFieldDidChange:(id)arg1 ;
-(void)submitPIN;
-(void)_jiggleView:(id)arg1 ;
-(void)_clearPasscode;
-(void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2 ;
@end
