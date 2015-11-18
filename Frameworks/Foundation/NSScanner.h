/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:55 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSCharacterSet;

@interface NSScanner : NSObject <NSCopying>

@property (copy,readonly) NSString * string; 
@property (assign) unsigned scanLocation; 
@property (copy) NSCharacterSet * charactersToBeSkipped; 
@property (assign) char caseSensitive; 
@property (retain) id locale; 
+(id)localizedScannerWithString:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)scannerWithString:(id)arg1 ;
-(id)_remainingString;
-(char)_scanDecimal:(unsigned)arg1 into:(int*)arg2 ;
-(NSCharacterSet *)charactersToBeSkipped;
-(char)caseSensitive;
-(id)_invertedSkipSet;
-(char)scanFloat:(float*)arg1 ;
-(char)scanHexDouble:(double*)arg1 ;
-(char)scanHexFloat:(float*)arg1 ;
-(char)scanUnsignedInteger:(unsigned*)arg1 ;
-(char)scanDecimal:(SCD_Struct_NS45*)arg1 ;
-(void)setCharactersToBeSkipped:(NSCharacterSet *)arg1 ;
-(char)scanUpToCharactersFromSet:(id)arg1 intoString:(id*)arg2 ;
-(char)scanCharactersFromSet:(id)arg1 intoString:(id*)arg2 ;
-(unsigned)scanLocation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(id)initWithString:(id)arg1 ;
-(void)setLocale:(id)arg1 ;
-(char)scanString:(id)arg1 intoString:(id*)arg2 ;
-(char)scanInteger:(int*)arg1 ;
-(char)isAtEnd;
-(char)scanUpToString:(id)arg1 intoString:(id*)arg2 ;
-(void)setScanLocation:(unsigned)arg1 ;
-(id)locale;
-(char)scanUnsignedLongLong:(unsigned long long*)arg1 ;
-(void)setCaseSensitive:(char)arg1 ;
-(char)scanDouble:(double*)arg1 ;
-(char)scanHexLongLong:(unsigned long long*)arg1 ;
-(char)scanInt:(int*)arg1 ;
-(char)scanHexInt:(unsigned*)arg1 ;
-(char)scanLongLong:(long long*)arg1 ;
@end
