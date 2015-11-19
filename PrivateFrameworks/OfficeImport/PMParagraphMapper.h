/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADParagraph;

@interface PMParagraphMapper : CMMapper {

	OADParagraph* mParagraph;

}
-(id)initWithOadParagraph:(id)arg1 parent:(id)arg2 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 isFirstParagraph:(char)arg3 ;
-(id)copyParagraphStyleWithState:(id)arg1 isFirstParagraph:(char)arg2 ;
-(void)addEndCharacterStyleToStyle:(id)arg1 ;
-(int)firstTextRunFontSize;
-(id)fontScheme;
@end

