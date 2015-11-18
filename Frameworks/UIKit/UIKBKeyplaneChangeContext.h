/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIKBKeyplaneChangeContext : NSObject {

	char _sizeDidChange;
	char _splitWidthsChanged;
	char _selfSizingChanged;
	char _updateAssistantView;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                           //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) char sizeDidChange;                  //@synthesize sizeDidChange=_sizeDidChange - In the implementation block
@property (assign,nonatomic) char splitWidthsChanged;               //@synthesize splitWidthsChanged=_splitWidthsChanged - In the implementation block
@property (assign,nonatomic) char selfSizingChanged;                //@synthesize selfSizingChanged=_selfSizingChanged - In the implementation block
@property (assign,nonatomic) char updateAssistantView;              //@synthesize updateAssistantView=_updateAssistantView - In the implementation block
+(id)keyplaneChangeContextWithSize:(CGSize)arg1 ;
+(id)keyplaneChangeContext;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setSplitWidthsChanged:(char)arg1 ;
-(char)sizeDidChange;
-(char)splitWidthsChanged;
-(char)selfSizingChanged;
-(void)setSelfSizingChanged:(char)arg1 ;
-(char)updateAssistantView;
-(void)setUpdateAssistantView:(char)arg1 ;
@end

