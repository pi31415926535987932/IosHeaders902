/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXFill : NSObject
+(void)initialize;
+(id)edFillFromXmlFillElement:(xmlNode*)arg1 differentialFill:(BOOL)arg2 state:(id)arg3 ;
+(id)edPatternFillFromXmlElement:(xmlNode*)arg1 differentialFill:(BOOL)arg2 state:(id)arg3 ;
+(id)edGradientFillFromXmlElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)edPatternTypeFromXmlPatternTypeString:(id)arg1 ;
+(int)edGradientTypeFromXmlGradientTypeString:(id)arg1 state:(id)arg2 ;
+(id)edStopFromXmlGradientElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)edFillFromXmlFillElement:(xmlNode*)arg1 state:(id)arg2 ;
@end
