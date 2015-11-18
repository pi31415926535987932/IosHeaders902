/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITextField.h>

@interface _MFMailRecipientTextField : UITextField {

	char _isShowingDictationPlaceholder;

}

@property (nonatomic,readonly) char isShowingDictationPlaceholder;              //@synthesize isShowingDictationPlaceholder=_isShowingDictationPlaceholder - In the implementation block
-(void)_handleKeyUIEvent:(id)arg1 ;
-(id)_previousKeyResponder;
-(id)insertDictationResultPlaceholder;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(char)arg2 ;
-(void)paste:(id)arg1 ;
-(id)customOverlayContainer;
-(char)isShowingDictationPlaceholder;
@end

