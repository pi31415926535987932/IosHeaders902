/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, NSString;

@interface IKTextParser : NSObject <NSCopying> {

	NSAttributedString* _attributedString;

}

@property (nonatomic,retain,readonly) NSString * string; 
@property (nonatomic,retain,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
+(id)textWithDOMElement:(id)arg1 usingParseBlock:(/*^block*/id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(NSAttributedString *)attributedString;
-(id)attributedStringWithFont:(id)arg1 style:(id)arg2 ;
-(id)_attributedStringFromDomElement:(id)arg1 usingParseBlock:(/*^block*/id)arg2 ;
-(id)_stringFromDateElement:(id)arg1 unformattedString:(id)arg2 ;
-(id)_stringFromDurationElement:(id)arg1 unformattedString:(id)arg2 ;
-(id)_stringFromNumberElement:(id)arg1 unformattedString:(id)arg2 ;
-(id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(int)arg3 style:(id)arg4 ;
@end

