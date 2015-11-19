/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidateSingle.h>

@interface TIHandwritingCompositionCandidate : TIKeyboardCandidateSingle {

	unsigned _deleteCount;

}
+(int)type;
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(unsigned)deleteCount;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(id)initWithCandidate:(id)arg1 deleteCount:(unsigned)arg2 ;
@end
