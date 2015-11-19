/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class NSString;

@interface WMSymbolMapper : CMMapper {

	unsigned short mCharacter;
	NSString* mFontName;

}
+(unsigned short)mapWindingsCharacter:(unsigned short)arg1 ;
+(unsigned short)mapZapfDingbatsCharacter:(unsigned short)arg1 ;
+(unsigned short)mapCharacter:(unsigned short)arg1 withFontName:(id)arg2 ;
+(char)isSymbolFontName:(id)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDSymbol:(id)arg1 parent:(id)arg2 ;
@end

